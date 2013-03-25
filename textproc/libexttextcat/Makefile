# $FreeBSD: textproc/libexttextcat/Makefile 314640 2013-03-19 13:04:30Z eadler $

PORTNAME=	libexttextcat
PORTVERSION=	3.4.0
CATEGORIES=	textproc
MASTER_SITES=	http://dev-www.libreoffice.org/src/libexttextcat/

MAINTAINER=	office@FreeBSD.org
COMMENT=	Language guessing by N-Gram-Based Text Categorization

LICENSE=	BSD

USE_XZ=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USES=	pathfix
USE_LDCONFIG=	yes

PORTDOCS=	README README.libtextcat TODO

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

PLIST_SUB+=	EXEEXT='x'
MAKE_ARGS=	EXEEXT=x

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

check:
	cd ${WRKSRC}/src && make check

.include <bsd.port.mk>
