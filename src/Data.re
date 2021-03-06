type social = {
  discord: string,
  github: string,
  twitter: string,
  linkedin: string,
};

type profile = {
  avatar: string,
  name: string,
  role: string,
  email: string,
  birth: string,
  location: string,
  personality: string,
  social,
};

type tag =
  | Advanced
  | Beginner
  | Interested
  | Intermediary
  | NotInterested
  | Toybox
  | WorkExperience;

type attr = {
  name: string,
  tags: list(tag),
};

type skill = {
  name: string,
  attribs: list(attr),
};

type raw = {
  profile,
  skills: list(skill),
};

let raw = {
  profile: {
    avatar: "https://avatars.githubusercontent.com/u/30958533",
    name: {js|wes\u039Benng.fs|js},
    role: "Software Developer",
    email: "weslenng@outlook.com",
    birth: "2000-12-31",
    location: {js|São Paulo, Brazil|js},
    personality: {js|INTJ • ♑|js},
    social: {
      discord: "https://discordapp.com/users/239549277611753473",
      github: "https://github.com/weslenng",
      twitter: "https://twitter.com/theweslenng",
      linkedin: "https://www.linkedin.com/in/weslenng",
    },
  },
  skills: [
    {
      name: "Languages",
      attribs: [
        {name: "Typescript", tags: [Advanced, WorkExperience]},
        {name: "Golang", tags: [Advanced, WorkExperience]},
        {name: "Rust", tags: [Intermediary, Interested]},
        {name: ".NET, F#", tags: [Intermediary, WorkExperience]},
        {name: "Reason, OCaml", tags: [Intermediary, Interested]},
        {name: "C, C++", tags: [Intermediary]},
      ],
    },
    {
      name: "Back End",
      attribs: [
        {name: "Node.JS", tags: [Advanced, WorkExperience]},
        {name: "REST APIs", tags: [Advanced, WorkExperience]},
        {name: "GraphQL", tags: [Intermediary, Interested]},
        {name: "Microservices", tags: [Intermediary, WorkExperience]},
        {name: "SQL DBs", tags: [Intermediary, WorkExperience]},
        {name: "NoSQL DBs", tags: [Advanced, WorkExperience]},
      ],
    },
    {
      name: "Front End",
      attribs: [
        {name: "HTML5, CSS3", tags: [Advanced, WorkExperience]},
        {name: "UI, UX", tags: [Intermediary, NotInterested]},
        {name: "React", tags: [Advanced, WorkExperience]},
        {name: "GraphQL", tags: [Intermediary]},
      ],
    },
    {
      name: "Others",
      attribs: [
        {name: "AWS", tags: [Advanced, WorkExperience]},
        {name: "Google Cloud", tags: [Advanced, WorkExperience]},
        {name: "Docker, Kubernetes", tags: [Intermediary, Interested]},
        {name: "Linux", tags: [Advanced, WorkExperience]},
        {name: "Git", tags: [Intermediary, WorkExperience]},
        {name: "Tests", tags: [Intermediary, Interested]},
        {name: "Security", tags: [Advanced, Toybox]},
        {name: "Scrum, Agile", tags: [Intermediary, WorkExperience]},
      ],
    },
  ],
};

let string_of_tag =
  fun
  | Advanced => "advanced"
  | Beginner => "beginner"
  | Interested => "interested"
  | Intermediary => "intermediary"
  | NotInterested => "not-interested"
  | Toybox => "toybox"
  | WorkExperience => "work-experience";

let color_of_tag =
  fun
  | Advanced => Css.rgb(255, 129, 142)
  | Beginner => Css.rgb(249, 255, 163)
  | Interested => Css.rgb(145, 215, 255)
  | Intermediary => Css.rgb(255, 159, 91)
  | NotInterested => Css.rgb(222, 222, 222)
  | Toybox => Css.rgb(245, 159, 255)
  | WorkExperience => Css.rgb(188, 255, 193);
