/** @type {import('tailwindcss').Config} */
export default {
  content: [
    "./index.html",
    "./src/**/*.{js,ts,jsx,tsx}",
  ],
  theme: {
    extend: {
      colors: {
        primary: "#6366f1", // indigo
        secondary: "#ec4899", // pink
      },
      backdropBlur: {
        xs: "2px",
      }
    },
  },
  plugins: [],
}
