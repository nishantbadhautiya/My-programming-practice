(self.webpackChunk_N_E=self.webpackChunk_N_E||[]).push([[516],{6053:function(e,t,s){"use strict";s.r(t),s.d(t,{__N_SSP:function(){return O}});var r=s(6687),n=s(9499),l=s(29),a=s(7794),i=s.n(a),o=s(1163),c=s(1664),d=s.n(c),m=s(8325),u=s.n(m),x=(s(5433),s(4335),s(9980),s(6102),s(366),s(6854),s(9945),s(2503),s(4279),s(2731),s(6177),s(8759),s(2911),s(5206),s(6263),s(110),s(7294)),p=s(3854),h=s(782),f=(s(4213),s(8533)),g=s(9008),b=s.n(g),v=s(3750),y=s(8193),w=s(2918),j=s(5893);function N(e,t){var s=Object.keys(e);if(Object.getOwnPropertySymbols){var r=Object.getOwnPropertySymbols(e);t&&(r=r.filter((function(t){return Object.getOwnPropertyDescriptor(e,t).enumerable}))),s.push.apply(s,r)}return s}function k(e){for(var t=1;t<arguments.length;t++){var s=null!=arguments[t]?arguments[t]:{};t%2?N(Object(s),!0).forEach((function(t){(0,n.Z)(e,t,s[t])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(s)):N(Object(s)).forEach((function(t){Object.defineProperty(e,t,Object.getOwnPropertyDescriptor(s,t))}))}return e}var O=!0;t.default=function(e){var t=e.singleVideo,s=e.allVideos,a=e.errorCode,c=(0,x.useState)([!0,!1,!1,!1]),m=c[0],g=c[1],N=(0,x.useState)(),O=N[0],C=N[1],S=(0,x.useState)(),_=S[0],T=S[1],E=(0,x.useState)({comment:"",reply:""}),P=E[0],A=E[1],D=(0,x.useState)(),H=D[0],I=D[1],B=(0,x.useState)(0),J=B[0],Z=B[1],L=(0,x.useState)(),F=L[0],M=L[1],V=(0,x.useState)({state:!0}),z=V[0],R=V[1],Y=(0,x.useState)(),q=Y[0],W=Y[1],X=(0,x.useState)(),Q=X[0],U=X[1],G=(0,x.useState)(!1),K=G[0],$=G[1],ee=(0,o.useRouter)().query.slug,te=function(e){var t=[!1,!1,!1,!1];t[e]=!0,g(t)},se=function(){var e=(0,l.Z)(i().mark((function e(){var t,s,r;return i().wrap((function(e){for(;;)switch(e.prev=e.next){case 0:return e.next=2,fetch("https://www.codewithharry.com/api/dataapi/getvideocomments?start="+J+"&end=5&search="+ee);case 2:return t=e.sent,Z(J+5),e.next=6,t.json();case 6:s=e.sent,F?(r=(r=JSON.parse(JSON.stringify(F))).concat(s.comments),M(r)):M(s.comments),I(s.pageLen);case 9:case"end":return e.stop()}}),e)})));return function(){return e.apply(this,arguments)}}(),re=function(){var e=(0,l.Z)(i().mark((function e(t){var s,r;return i().wrap((function(e){for(;;)switch(e.prev=e.next){case 0:return e.next=2,fetch("https://www.codewithharry.com/api/dataapi/getvideoreplies?search="+t);case 2:return s=e.sent,e.next=5,s.json();case 5:r=e.sent,"all"===t?U(r):W(r);case 7:case"end":return e.stop()}}),e)})));return function(t){return e.apply(this,arguments)}}(),ne=function(e){A(k(k({},P),{},(0,n.Z)({},e.target.name,e.target.value)))},le=function(){var e=(0,l.Z)(i().mark((function e(t){var s,n,l,a;return i().wrap((function(e){for(;;)switch(e.prev=e.next){case 0:if(t.preventDefault(),s=JSON.parse(localStorage.getItem("cwhuser"))){e.next=5;break}return h.Am.error("You need to login first",{position:"top-right",autoClose:5e3,hideProgressBar:!1,closeOnClick:!0,pauseOnHover:!0,draggable:!0,progress:void 0}),e.abrupt("return");case 5:return n=t.target.id,e.next=8,fetch("https://www.codewithharry.com/api/postvideocomments",{method:"POST",headers:{"Content-Type":"application/json"},body:n?JSON.stringify({comment:P.reply,parent:n,token:s.token,blog:ee,state:"published",securityToken:String(8*(new Date).getTime())}):JSON.stringify({comment:P.comment,token:s.token,blog:ee,state:"published",securityToken:String(8*(new Date).getTime())})});case 8:return l=e.sent,A({comment:"",reply:""}),n?t.target.children[2].disabled=!0:t.target.children[0].children[2].children[0].children[0].disabled=!0,e.next=13,l.json();case 13:!0===(a=e.sent).success?(n?(W(q?function(e){return[].concat((0,r.Z)(e),[{comment:P.reply,parent:n,user:a.username,createdAt:(new Date).toJSON()}])}:[{comment:P.reply,parent:n,user:a.username,createdAt:(new Date).toJSON()}]),a.message="Reply Added!"):M((function(e){return[a.comment].concat((0,r.Z)(e))})),h.Am.success(a.message,{position:"top-right",autoClose:5e3,hideProgressBar:!1,closeOnClick:!0,pauseOnHover:!0,draggable:!0,progress:void 0})):h.Am.error(a.message,{position:"top-right",autoClose:5e3,hideProgressBar:!1,closeOnClick:!0,pauseOnHover:!0,draggable:!0,progress:void 0});case 15:case"end":return e.stop()}}),e)})));return function(t){return e.apply(this,arguments)}}();return(0,x.useEffect)((function(){Array.from(document.getElementsByClassName("copy-to-clipboard-button")).forEach((function(e){e.addEventListener("click",(function(e){e.target.innerText="Copied!";var t=e.target.parentElement.parentElement.parentElement.parentElement.getElementsByTagName("pre")[0].innerText;setTimeout((function(){e.target.innerText="Copy"}),1e3),navigator.clipboard.writeText(t)}))})),a||T(function(e){var t=document.createElement("div");return t.innerHTML=e,u().manual=!0,u().highlightAllUnder(t),t.innerHTML}(t.content.replace(/&lt;\|AD\|&gt;/g,'<div class=\'cwhads my-4\'><ins class="adsbygoogle" style="display:block" data-ad-client="ca-pub-9655830461045889" data-ad-slot="8999979664" data-ad-format="auto" data-full-width-responsive="true"></ins></div>')))})),(0,x.useEffect)((function(){try{JSON.parse(localStorage.getItem("admin")).username||C(!0)}catch(e){C(!1)}}),[]),(0,x.useEffect)((function(){setTimeout((function(){var e=document.getElementsByClassName("cwhads").length;console.log("pushing",e);for(var t=0;t<e;t++){console.log("pushing",e.length);try{(adsbygoogle=window.adsbygoogle||[]).push({})}catch(s){}}}),0),g([!0,!1,!1,!1]),A({comment:"",reply:""}),I(),Z(0),M(),R({state:!0}),W(),U()}),[ee]),a?(0,j.jsx)(w.default,{statusCode:a}):(0,j.jsxs)(j.Fragment,{children:[(0,j.jsxs)(b(),{children:[(0,j.jsxs)("title",{children:[t.title," | CodeWithHarry"]}),(0,j.jsx)("meta",{name:"description",content:t.metadesc}),(0,j.jsx)("link",{rel:"icon",href:"/img/favicon.ico"})]}),(0,j.jsx)(h.Ix,{}),(0,j.jsx)("section",{className:"mx-2 justify-center align-middle",children:(0,j.jsxs)("div",{className:"flex flex-wrap lg:-mx-1 xl:-mx-1",children:[(0,j.jsx)("div",{className:"w-full border lg:my-1 lg:px-1 lg:w-2/3 xl:my-1 xl:px-1 xl:w-2/3 mx-auto",children:(0,j.jsx)("div",{className:"h-[30vh] lg:h-[30vh] mx-auto xl:h-[70vh]",children:(0,j.jsx)("iframe",{title:"YouTube Video",src:"https://www.youtube.com/embed/".concat(t.videoId),frameBorder:"0",allow:"accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture",allowFullScreen:"",className:"w-full h-full"})})}),(0,j.jsxs)("div",{className:"mx-auto w-full xl:text-lg font-medium pt-3 px-2 rounded-t-lg lg:w-1/3 overflow-x-hidden",children:[(0,j.jsxs)("div",{className:"flex items-center font-karla font-medium md:hidden",children:[K?"Hide":"Show"," Course Contents",!K&&(0,j.jsx)(v.Dwu,{onClick:function(){$(!0)},className:"ml-2 text-lg"}),K&&(0,j.jsx)(y._nT,{onClick:function(){$(!1)},className:"ml-2 text-lg"})]}),(0,j.jsx)("div",{className:"my-0 lg:h-[30vh] xl:h-[64vh] w-full lg:my-1 xl:my-1 lg:px-3 transition-all overflow-scroll overflow-x-hidden ".concat(K?"h-60":"h-0"),children:s.map((function(e){return(0,j.jsxs)("div",{className:"px-2 mt-4 flex lg:px-8 py-2 bg-white rounded-lg shadow-lg",children:[(0,j.jsx)("input",{type:"checkbox",name:"",id:"",className:"mr-2"}),(0,j.jsx)(d(),{href:"/videos/"+e.slug,children:(0,j.jsx)("div",{className:"mt-4 cursor-pointer",children:e.title})})]},e.slug)}))})]})]})}),(0,j.jsxs)("nav",{className:"mx-2 px-3 tabs flex sm:flex-row overflow-x-scroll lg:overflow-x-hidden",children:[(0,j.jsx)("button",{className:"tab active text-gray-600 py-2 px-2 block hover:text-purple-700 focus:outline-none font-medium ".concat(m[0]&&"border-b-2"," border-purple-700"),onClick:function(){te("0")},children:"Overview"}),(0,j.jsx)("button",{className:"tab active text-gray-600 py-2 px-2 block hover:text-purple-700 focus:outline-none font-medium ".concat(m[1]&&"border-b-2"," border-purple-700"),onClick:function(){te("1"),se(),ee&&re("all")},children:"Q&A"}),(0,j.jsx)("button",{className:"tab active text-gray-600 py-2 px-2 block hover:text-purple-700 focus:outline-none font-medium ".concat(m[2]&&"border-b-2"," border-purple-700"),onClick:function(){te("2")},children:"Downloads"}),(0,j.jsx)("button",{className:"tab active text-gray-600 py-2 px-2 block hover:text-purple-700 focus:outline-none font-medium ".concat(m[3]&&"border-b-2"," border-purple-700"),onClick:function(){te("3")},children:"Announcements"})]}),(0,j.jsxs)("div",{id:"panels",children:[(0,j.jsxs)("div",{className:"lg:w-2/3 mx-4 lg:mx-8 my-2 min-h-screen",children:[m[0]&&(0,j.jsxs)(j.Fragment,{children:[(0,j.jsxs)("h1",{className:"text-2xl my-4 lg:text-3xl flex font-semibold",children:[t.title,O&&(0,j.jsx)("a",{href:"/dashboard/videos/"+ee,target:"_blank",rel:"noreferrer",children:(0,j.jsx)(p.z2D,{})})]}),(0,j.jsx)("div",{className:"cont font-karla text-lg",dangerouslySetInnerHTML:{__html:_}})]}),m[1]&&(0,j.jsxs)(j.Fragment,{children:[(0,j.jsx)("div",{className:"flex items-center justify-center shadow-lg mt-5 border mb-7 max-w-lg rounded-lg",children:(0,j.jsx)("form",{className:"w-full max-w-xl bg-white rounded-lg px-4 pt-2",onSubmit:le,children:(0,j.jsxs)("div",{className:"flex flex-wrap -mx-3 mb-6",children:[(0,j.jsx)("h2",{className:"px-4 pt-3 pb-2 text-gray-800 text-lg",children:"Add a new comment"}),(0,j.jsx)("div",{className:"w-full md:w-full px-3 mb-2 mt-2",children:(0,j.jsx)("textarea",{value:P.comment,onChange:ne,className:"bg-gray-100 rounded border border-gray-400 leading-normal resize-none w-full h-20 py-2 px-3 font-medium placeholder-gray-700 focus:outline-none focus:bg-white",name:"comment",placeholder:"Type Your Comment",required:!0})}),(0,j.jsx)("div",{className:"w-full md:w-full flex items-start px-3",children:(0,j.jsx)("div",{className:"-mr-1",children:(0,j.jsx)("input",{type:"submit",className:"disabled:bg-gray-200 disabled:text-gray-400 disabled:cursor-default text-white bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-3 py-2 text-center inline-flex items-center mx-1 cursor-pointer",value:"Post Comment"})})})]})})}),F&&(0,j.jsxs)(j.Fragment,{children:[(0,j.jsxs)("h3",{className:"mb-2 text-2xl font-semibold",children:["Comments (",H,")"]}),(0,j.jsx)("hr",{className:"mb-1"}),0==H&&(0,j.jsx)("div",{className:"m-3",children:"No comments found"}),(0,j.jsx)(f.Z,{dataLength:F.length,next:se,hasMore:F.length!==H,loader:(0,j.jsx)("div",{className:"flex items-center justify-center mt-6",children:(0,j.jsx)("div",{className:"inline-flex max-w-4xl mx-auto items-center px-4 py-2 leading-6 transition ease-in-out duration-150 cursor-not-allowed",children:(0,j.jsxs)("svg",{className:"animate-spin h-8 w-8 text-purple-700",fill:"none",viewBox:"0 0 24 24",children:[(0,j.jsx)("circle",{className:"opacity-25",cx:"12",cy:"12",r:"10",stroke:"currentColor",strokeWidth:"4"}),(0,j.jsx)("path",{className:"opacity-75",fill:"currentColor",d:"M4 12a8 8 0 018-8V0C5.373 0 0 5.373 0 12h4zm2 5.291A7.962 7.962 0 014 12H0c0 3.042 1.135 5.824 3 7.938l3-2.647z"})]})})}),children:F.map((function(e){return(0,j.jsx)("div",{className:"max-w-screen-sm px-4",children:(0,j.jsxs)("div",{className:"flex my-3",children:[(0,j.jsx)("div",{className:"flex-shrink-0 mr-3",children:(0,j.jsx)("img",{src:"/img/user.png",alt:"",className:"mt-2 rounded-full w-8 h-8 sm:w-10 sm:h-10"})}),(0,j.jsxs)("div",{className:"flex-1 border rounded-lg px-4 py-2 sm:px-6 sm:py-4 leading-relaxed max-w-[75vw] break-words",children:[(0,j.jsx)("strong",{children:e.user}),(0,j.jsx)("span",{className:"text-xs text-gray-500 ml-2",children:e.createdAt.slice(0,10)}),(0,j.jsx)("div",{className:"flex",children:(0,j.jsx)("p",{className:"text-sm mt-1",children:e.comment})}),Q&&Q.map((function(t){return e._id==t&&(0,j.jsx)("div",{className:"flex space-x-4",children:(0,j.jsx)("button",{className:"my-3 uppercase tracking-wide text-gray-400 font-bold text-xs cursor-pointer",onClick:function(){re(e._id)},children:"View all replies"})},t)})),q&&q.map((function(t){return e._id==t.parent&&(0,j.jsx)("div",{className:"space-y-4",children:(0,j.jsxs)("div",{className:"flex",children:[(0,j.jsx)("div",{className:"flex-shrink-0 mr-3",children:(0,j.jsx)("img",{src:"/img/user.png",alt:"",className:"mt-3 rounded-full w-6 h-6 sm:w-8 sm:h-8"})}),(0,j.jsxs)("div",{className:"flex-1 bg-gray-100 mb-4 rounded-lg px-4 py-2 sm:px-6 sm:py-4 leading-relaxed",children:[(0,j.jsx)("strong",{children:t.user}),(0,j.jsx)("span",{className:"text-xs text-gray-500 ml-2",children:t.createdAt.slice(0,10)}),(0,j.jsx)("p",{className:"text-xs sm:text-sm",children:t.comment})]})]})},t._id)})),(0,j.jsx)("button",{className:"mt-3 uppercase tracking-wide text-white bg-purple-600 rounded p-2 font-bold text-xs cursor-pointer ".concat(z.state?"block":"hidden"),onClick:function(){R({state:!1,id:e._id})},children:"Reply"}),(0,j.jsx)("div",{className:"flex space-x-4",children:e._id==z.id&&(0,j.jsxs)("form",{onSubmit:le,className:"flex ".concat(z.state?"hidden":"block"),id:e._id,children:[(0,j.jsx)("div",{className:"flex-shrink-0 mr-3",children:(0,j.jsx)("img",{src:"/img/user.png",alt:"",className:"rounded-full w-6 h-6 sm:w-8 sm:h-8"})}),(0,j.jsx)("input",{type:"text",className:"border pl-2",name:"reply",value:P.reply,onChange:ne}),(0,j.jsx)("button",{type:"submit",className:"disabled:bg-gray-200 disabled:text-gray-400 disabled:cursor-default ml-2 hover:bg-purple-800 uppercase tracking-wide text-white bg-purple-600 rounded p-2 font-bold text-xs cursor-pointer",children:"Post"}),(0,j.jsx)("div",{className:"mt-2 ml-2 text-gray-600 uppercase tracking-wide active:text-purple-600 font-bold text-xs cursor-pointer",onClick:function(){R({state:!0,id:e._id})},children:"Cancel"})]})})]})]})},e._id)}))})]})]}),m[2]&&(0,j.jsxs)("ul",{className:"list-decimal ml-5",children:[(0,j.jsx)("h1",{className:"text-2xl my-4 lg:text-3xl flex font-semibold font-karla",children:"Downloads"}),0==t.downloads.length&&(0,j.jsx)("div",{children:"No Downloadable assets found for this video!"}),t.downloads.map((function(e){var t=e.split("/");return(0,j.jsxs)("li",{children:[t[t.length-1],(0,j.jsx)("a",{href:e,className:"ml-5",children:(0,j.jsx)("button",{className:"text-white bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-3 py-2 text-center inline-flex items-center my-2",children:"Download"})})]},e)}))]}),m[3]&&(0,j.jsx)("div",{children:"No Announcements as of now!"})]}),(0,j.jsxs)("div",{className:"flex mx-4 lg:mr-16 my-3 px-3 justify-between lg:w-2/3",children:[(0,j.jsx)(d(),{href:"/videos/"+ee.slice(0,ee.lastIndexOf("-"))+"-"+(parseInt(ee.split("-").at(-1))-1),children:(0,j.jsx)("button",{className:"text-white w-20 cursor-pointer justify-center bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-3 py-2 text-center inline-flex items-center mx-1 disabled:bg-gray-200 disabled:text-gray-400 disabled:cursor-default",disabled:1==ee.split("-").at(-1),children:" Previous "})}),(0,j.jsx)(d(),{href:"/videos/"+ee.slice(0,ee.lastIndexOf("-"))+"-"+(parseInt(ee.split("-").at(-1))+1),children:(0,j.jsx)("button",{className:"text-white w-20 cursor-pointer justify-center bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-3 py-2 text-center inline-flex items-center mx-1 disabled:bg-gray-200 disabled:text-gray-400 disabled:cursor-default",disabled:ee.split("-").at(-1)==s.length,children:" Next "})})]})]})]})}},177:function(e,t,s){(window.__NEXT_P=window.__NEXT_P||[]).push(["/videos/[slug]",function(){return s(6053)}])}},function(e){e.O(0,[556,13,353,189,993,774,888,179],(function(){return t=177,e(e.s=t);var t}));var t=e.O();_N_E=t}]);