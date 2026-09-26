# Periodcare

Periodcare is a Qt/C++ desktop application designed to help users track and manage their menstrual health. It combines period tracking with mood logging, nutrition guidance, and yoga recommendations in a single app.

## Features

- **Login & Signup** — secure user authentication with change/forgot password support
- **Period Calendar** — track and predict menstrual cycles
- **Mood Management** — log daily moods and view mood history
- **Nutrients** — nutrition tips and guidance tailored to cycle phases
- **Yoga & Wellness** — suggested yoga poses (e.g. Balasana, Cat-Cow, Bridge, Paschimottanasana) for symptom relief
- **Sanitary Care** — information and reminders related to sanitary care
- **Profile & Avatars** — customizable user profiles with avatar selection

## Tech Stack

- **Language:** C++
- **Framework:** Qt (Widgets)
- **Build System:** qmake (`.pro` files)

## Getting Started

### Prerequisites
- Qt Creator (developed with Qt 6.9)
- MinGW or another supported compiler

### Build & Run
1. Clone the repository
2. Open `PeriodcareLogin.pro` in Qt Creator
3. Configure the project with your Qt kit
4. Build and run

## Project Structure

- `PeriodcareLogin.pro` — main login/entry project
- `dashboard.*` — main dashboard after login
- `periodcalendar.*` — period tracking calendar
- `moodmanagement.*`, `moodlogdialog.*`, `moodsecond.*` — mood tracking
- `nutrients.*` — nutrition module
- `yoga.*` — yoga recommendations
- `sanitarycare.*` — sanitary care module
- `signup.*`, `loginpage.*`, `changepwd.*`, `forgotpwd.*` — authentication
- `avatarutils.*` — avatar/profile picture handling



