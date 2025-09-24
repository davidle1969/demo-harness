# Use a base image
FROM ubuntu:latest

# Set working directory
WORKDIR /app

# Copy application files
COPY . .

# Install dependencies (example for a Node.js app)
#RUN apt-get update && apt-get install -y nodejs npm
#RUN npm install

# Expose a port (if your application listens on one)
EXPOSE 8080

# Define the command to run when the container starts

#CMD ["node", "app.js"]
CMD ["calculator", "< test.txt"]
