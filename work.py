import cv2
import os

# Function to extract frames from a video file
def extract_frames(video_path, output_folder, frame_rate=1):
    # Create output folder if it doesn't exist
    os.makedirs(output_folder, exist_ok=True)
    
    # Open the video file
    video_capture = cv2.VideoCapture(video_path)
    
    # Get the total number of frames and the frames per second (fps)
    total_frames = int(video_capture.get(cv2.CAP_PROP_FRAME_COUNT))
    fps = int(video_capture.get(cv2.CAP_PROP_FPS))
    
    print(f'Total frames: {total_frames}, FPS: {fps}')

    if frame_rate <= 0 or fps < frame_rate:
        print("Invalid frame rate specified. Exiting.")
        return

    count = 0
    frame_count = 0

    while True:
        # Read the next frame from the video
        success, frame = video_capture.read()
        if not success:
            break  # End of video
        
        # Save the frame at specified intervals
        if frame_count % (fps // frame_rate) == 0:
            frame_filename = os.path.join(output_folder, f'frame_{count:04d}.jpg')
            cv2.imwrite(frame_filename, frame)
            count += 1
        
        frame_count += 1

    # Release the video capture object
    video_capture.release()
    print(f'Extracted {count} frames to {output_folder}')

# Set the paths
video_path = r'C:\Users\tanju\OneDrive\Desktop\MLProject\IMG_6151.mov'  # Update with your video file name
output_folder = r'C:\Users\tanju\OneDrive\Desktop\MLoutput'

# Call the function to extract frames
extract_frames(video_path, output_folder)
