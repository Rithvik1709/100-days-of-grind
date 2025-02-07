# Automated Exploratory Data Analysis (EDA) Script

## Overview
This Python script performs **automated exploratory data analysis (EDA)**, including:
- Handling missing values
- Basic feature engineering
- Generating detailed EDA reports using **Pandas Profiling**, **Sweetviz**, and **D-Tale**
- Visualizing data distributions, correlations, and missing values

## Features 🚀
✅ **Missing Value Handling:**
- Fills numerical columns with `median`
- Fills categorical columns with `mode`

✅ **Feature Engineering:**
- Adds new features based on column interactions (e.g., `income_per_year` from `income` & `age`)

✅ **EDA Reports:**
- **Pandas Profiling**: Generates an interactive HTML report (`pandas_profiling_report.html`)
- **Sweetviz**: Creates a comparative analysis (`sweetviz_report.html`)
- **D-Tale**: Opens an interactive dashboard to explore the dataset

✅ **Data Visualization:**
- **Correlation Heatmap** (Seaborn)
- **Feature Distributions** (Matplotlib Histograms)
- **Missing Values Matrix** (Missingno)

## Installation 📥
Ensure you have the required dependencies installed:
```bash
pip install pandas ydata-profiling sweetviz dtale matplotlib seaborn missingno
```

## Usage 🔧
1. Place your dataset (`your_dataset.csv`) in the working directory.
2. Run the script:
```python
python auto_eda.py
```
3. Outputs:
   - `pandas_profiling_report.html`
   - `sweetviz_report.html`
   - Interactive **D-Tale** dashboard (run in Jupyter Notebook)