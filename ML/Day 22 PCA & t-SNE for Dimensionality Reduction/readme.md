 Day 22: Principal Component Analysis (PCA) & t-SNE

🧠 Objective

Dimensionality reduction is a key step in understanding and visualizing high-dimensional data. Today, we explore two powerful techniques:

Principal Component Analysis (PCA) – a linear method to reduce dimensions while retaining the maximum variance.
t-SNE (t-Distributed Stochastic Neighbor Embedding) – a nonlinear method ideal for visualizing complex patterns in data.
📂 Dataset

We use a synthetic dataset with 10 features and 3 classes. It simulates a classification task suitable for dimensionality reduction.

📁 File: dimensionality_reduction_dataset.csv
🔢 Rows: 300
🧬 Columns: 10 features + 1 label

🛠️ Techniques Used

1. PCA (Principal Component Analysis)
Projects high-dimensional data to a lower-dimensional space.
Retains directions of maximum variance.
Good for noise reduction and linear relationships.
2. t-SNE (t-distributed Stochastic Neighbor Embedding)
Non-linear dimensionality reduction technique.
Captures local and global structure of data better than PCA.
Useful for visualizing high-dimensional data in 2D or 3D.
📌 Steps

Load and standardize the dataset
Standardization ensures all features contribute equally.
Apply PCA
Reduces data to 2 principal components.
Apply t-SNE
Learns the structure of the data in lower dimensions.
Visualize the results
Plot PCA and t-SNE results side by side.
📈 Visual Output

Two 2D scatter plots:

PCA Projection: Shows direction of maximum variance.
t-SNE Projection: Reveals clusters and local structure more clearly.
🔍 Why It’s Important

Data Visualization: Visualizing data helps in understanding distributions and clusters.
Feature Reduction: Reduces computation in ML models.
Insight Discovery: Identifies patterns, noise, or outliers.
Preprocessing Step: Often used before clustering or classification.
▶️ Run the Code

pip install pandas scikit-learn matplotlib
# Save the code from this day as day24_pca_tsne.py and run:
python day24_pca_tsne.py
