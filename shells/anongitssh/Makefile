PORTNAME=	anongitssh
PORTVERSION=	0.2
DISTVERSIONPREFIX=	v
CATEGORIES=	shells

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Restricted shell for git-upload-pack over SSH
WWW=		https://github.com/hrs-allbsd/anongitssh/

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	hrs-allbsd
MAKE_ARGS=	MK_INSTALL_AS_USER="yes" BINMODE=0555

README_URL?=		https://git.FreeBSD.org/
REPODIR_PREFIX?=	/home/git
ANONGIT_USER?=		anongit
CONTACT?=		git-admin@FreeBSD.org
GITUPLOADPACK_PATH?=	/usr/local/bin/git-upload-pack
.for D in README_URL REPODIR_PREFIX ANONGIT_USER CONTACT GITUPLOADPACK_PATH
MAKE_ARGS+=	${D}=\"${$D}\"
.endfor

PORTDOCS=	README

OPTIONS_DEFINE=	DOCS
OPTIONS_DEFAULT=DOCS

CFLAGS= -Wno-format-truncation
pre-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}

post-install-DOCS-on:
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

dfly-patch:
	${REINPLACE_CMD} -e 's@\(defined(__FreeBSD__)\)@(\1 || defined(__DragonFly__))@g' \
		${WRKSRC}/anongitssh.c
	${REINPLACE_CMD} -e 's@-Wmissing-variable-declarations@@g' \
			 -e 's@-Wthread-safety@@g' -e 's@-Qunused-arguments@@g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
