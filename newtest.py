import cv2
import os

# Function to extract frames from a video file
def extract_frames(video_path, output_folder):
    # Create output folder if it doesn't exist
    os.makedirs(output_folder, exist_ok=True)
    
    # Open the video file
    video_capture = cv2.VideoCapture(video_path)
    
    # Get the total number of frames
    total_frames = int(video_capture.get(cv2.CAP_PROP_FRAME_COUNT))
    print(f'Total frames: {total_frames}')

    count = 0

    while True:
        # Read the next frame from the video
        success, frame = video_capture.read()
        if not success:
            break  # End of video
        
        # Save the frame
        frame_filename = os.path.join(output_folder, f'frame_{count:04d}.jpg')
        cv2.imwrite(frame_filename, frame)
        count += 1

    # Release the video capture object
    video_capture.release()
    print(f'Extracted {count} frames to {output_folder}')

# Set the paths
video_path = r'C:\Users\tanju\OneDrive\Desktop\MLProject\IMG_6158.mov'  # Update with your video file name
output_folder = r'C:\Users\tanju\OneDrive\Desktop\output4'

# Call the function to extract frames
extract_frames(video_path, output_folder)
