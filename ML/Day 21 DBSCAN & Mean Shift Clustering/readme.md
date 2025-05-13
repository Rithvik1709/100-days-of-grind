📅 Day 23: DBSCAN & Mean Shift Clustering

🧠 Objective

Today’s goal is to understand and implement two density-based clustering algorithms:

DBSCAN (Density-Based Spatial Clustering of Applications with Noise)
Mean Shift Clustering
These algorithms do not require specifying the number of clusters beforehand, making them ideal for discovering clusters of arbitrary shape and size, and for handling outliers effectively.

📂 Dataset

File: blobs_clustering_dataset.csv
Description: A synthetic dataset with clusters of different densities and some noise. It is used to test how well density-based algorithms can identify irregular clusters and ignore outliers.

📊 Why It’s Important

Clustering with DBSCAN and Mean Shift is crucial when:

The number of clusters is not known in advance
Clusters are not spherical or vary in density
You need to detect and exclude noise/outliers
Real-world applications:

GPS trajectory clustering
Social network pattern discovery
Anomaly detection in cybersecurity
🚀 What You’ll Implement

✅ DBSCAN:

Groups together points that are closely packed
Marks points in low-density regions as outliers
✅ Mean Shift:

Locates areas of high data density ("modes") and shifts points toward them
Automatically determines the number of clusters
🛠 How to Run

1. Install dependencies
pip install pandas matplotlib scikit-learn
2. Run the Python script
Load blobs_clustering_dataset.csv
Apply DBSCAN and Mean Shift
Plot clustering results side by side