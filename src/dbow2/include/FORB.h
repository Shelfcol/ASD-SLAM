/**
 * File: FORB.h
 * Date: June 2012
 * Author: Dorian Galvez-Lopez
 * Description: functions for ORB descriptors
 * License: see the LICENSE.txt file
 *
 */

#ifndef __D_T_F_ORB__
#define __D_T_F_ORB__

#include <opencv2/core/core.hpp>
#include <vector>
#include <string>

#include "FClass.h"
#include <sstream>
using namespace std;
namespace DBoW2 {

/// Functions to manipulate ORB descriptors
class FORB: protected FClass
{
public:

  /// Descriptor type
  typedef cv::Mat TDescriptor; // CV_8U
  /// Pointer to a single descriptor
  typedef const TDescriptor *pDescriptor;
  /// Descriptor length (in bytes)
  static const int L;

  /**
   * Calculates the mean value of a set of descriptors
   * @param descriptors
   * @param mean mean descriptor
   */
  static void meanValue(const std::vector<pDescriptor> &descriptors,
    TDescriptor &mean);

  /**
   * Calculates the distance between two descriptors
   * @param a
   * @param b
   * @return distance
   */
  static int distance(const TDescriptor &a, const TDescriptor &b);

  /**
   * Returns a string version of the descriptor
   * @param a descriptor
   * @return string version
   */
  static std::string toString(const TDescriptor &a)
	{
	  stringstream ss;
	  const unsigned char *p = a.ptr<unsigned char>();
	  
	  for(int i = 0; i < a.cols; ++i, ++p)
	  {
		ss << (int)*p << " ";
	  }
	  
	  return ss.str();
	}


  /**
   * Returns a descriptor from a string
   * @param a descriptor
   * @param s string version
   */
  static void fromString(TDescriptor &a, const std::string &s)
	{
	  a.create(1, FORB::L, CV_8U);
	  unsigned char *p = a.ptr<unsigned char>();
	  
	  stringstream ss(s);
	  for(int i = 0; i < FORB::L; ++i, ++p)
	  {
		int n;
		ss >> n;
		
		if(!ss.fail()) 
		  *p = (unsigned char)n;
	  }
  
	}

  /**
   * Devuelve un descriptor a partir de sus datos binarios en un array.
   * Esta función fue inspirada en fromString.
   * @param a descriptor
   * @param buffer array con el descriptor
   */
  static void fromArray(TDescriptor &a, unsigned char* p);

  /**
   * Returns a mat with the descriptors in float format
   * @param descriptors
   * @param mat (out) NxL 32F matrix
   */
  static void toMat32F(const std::vector<TDescriptor> &descriptors,
    cv::Mat &mat);

  static void toMat8U(const std::vector<TDescriptor> &descriptors,
    cv::Mat &mat);
  
    /**
   * Fills an array with the values from a descriptor
   * @param descriptors descriptor
   * @param array (out) unsigned char * to store the values of the descriptor
   */
  static void toArray8U(const TDescriptor &descriptors, unsigned char * array);

   /**
   * Fills an descriptor with the values from an array
   * @param descriptors (out) descriptor
   * @param array (in) unsigned char * containing the values of the descriptor
   */
  static void fromArray8U(TDescriptor &descriptors, unsigned char * array);

};

} // namespace DBoW2

#endif

