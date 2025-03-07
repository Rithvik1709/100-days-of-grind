# 🔍 Hyperparameter Tuning - Grid Search & Random Search

## 📌 Introduction  
This project demonstrates **Hyperparameter Tuning** techniques using **Grid Search** and **Random Search** on a synthetic dataset. Optimizing hyperparameters is crucial for improving machine learning model performance, and this project provides a hands-on guide to tuning hyperparameters efficiently.

## 📂 Folder Structure  
```
hyperparameter_tuning_project/
│── data/
│   ├── synthetic_data.csv  # Generated dataset

│   ├── Hyperparameter_Tuning.ipynb  # Jupyter notebook with step-by-step explanation
│   ├── hyperparameter_tuning.py  # Python script for running Grid & Random Search
│── README.md  # Project documentation
```

## 📊 Dataset  
The dataset contains 500 synthetic samples with four features and a binary target variable. It is stored in `data/synthetic_data.csv`.

| Feature Name  | Description |
|--------------|-------------|
| Feature_1 | Continuous values from a uniform distribution (10-100) |
| Feature_2 | Normally distributed values (mean=50, std=15) |
| Feature_3 | Integer categorical feature (1-4) |
| Feature_4 | Beta-distributed values scaled to 100 |
| Target | Binary classification (0 or 1) |

## 🛠️ Steps in the Project  
1. **Load the dataset** – Read the synthetic dataset.  
2. **Data Preprocessing** – Splitting the dataset into training and test sets.  
3. **Train a baseline model** – Implement a RandomForest classifier.  
4. **Grid Search** – Performs an exhaustive search over a predefined hyperparameter space.  
5. **Random Search** – Samples random combinations of hyperparameters for faster tuning.  
6. **Evaluate the best model** – Test the tuned model and measure accuracy.  

## 📌 Usage  

### 🔹 Option 1: Run the Jupyter Notebook  
Navigate to the `notebooks/` folder and open `Hyperparameter_Tuning.ipynb`. Follow the steps inside.

### 🔹 Option 2: Run the Python Script  
Execute the Python script in the `scripts/` folder:
```bash
cd scripts
python hyperparameter_tuning.py
```
This will print the best hyperparameters and model accuracy.

## ✅ Results  
After running both tuning methods, the best model will be trained and evaluated. The final accuracy score will be displayed.

## 🚀 Technologies Used  
- Python  
- Pandas & NumPy  
- Scikit-learn  
- RandomForest Classifier  
- GridSearchCV & RandomizedSearchCV  


