BAG_NAME=/home/gxf/slam/slam_dataset/kitti/dataset/sequences/00
OUT_ADDR=/home/gxf/slam/ASD-SLAM/DataSave
EXE_ROOT=/home/gxf/slam/ASD-SLAM

ORB_SLAM_ADDR=${EXE_ROOT}/devel/lib/vslam/kitti

${ORB_SLAM_ADDR} --bag_addr=${BAG_NAME} --output_addr=${OUT_ADDR}/ --voc_addr=/home/gxf/slam/ASD-SLAM/best_model/small_voc.yml.gz --camera_config=/home/gxf/slam/ASD-SLAM/cameraconfig/KITTI/kitti00-02.txt --image_topic=/camera/image_raw --min_frame=0 --max_frame=50000 --step_frame=1 --use_orb=false --feature_count=2000 --feature_scale_factor=1.2 --feature_level=8 --min_match_count=100 --max_step_KF=15 --v=0 --logtostderr=true --colorlogtostderr=true 




