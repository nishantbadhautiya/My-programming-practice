const nodemailer = require("nodemailer");

async function sendMail({ emailto, emailfrom, size, filename, uuid, subject }) {
  let transporter = nodemailer.createTransport({
    host: `${process.env.SMTP_SERVER}`,
    port: 587,
    secure: false,
    auth: {
      user: process.env.SMTP_USER,
      pass: process.env.SMTP_PASSWORD,
    },
  });
  let info = await transporter.sendMail({
    from: emailfrom,
    to: emailto,
    subject: subject,
    text: "This is an important message to share the file with you",
    // html: import('./emailtemplate',{
    //   size : size,
    //   filename : filename,
    //   subject : subject,
    //   downloadLink : `${process.env.BASE_URL}/files/download/${uuid}`
    // })
    html: '<h1>This is an import mail for you</h1>'
  });
}
module.exports = sendMail;
