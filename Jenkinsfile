pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'make' 
                archiveArtifacts artifacts: 'add', fingerprint: true 
            }
        }
    }
}
