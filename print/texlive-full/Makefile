PORTNAME=	texlive
DISTVERSION=	${TEXLIVE_VERSION}
CATEGORIES=	print
PKGNAMESUFFIX=	-full

MAINTAINER=	tex@FreeBSD.org
COMMENT=	TeX Live, Full Version
WWW=		https://tug.org/texlive/

USES=		metaport tex
USE_TEX=	full texhash

OPTIONS_DEFINE=	DOCS SOURCE

DOCS_USE=	TEX=docs
SOURCE_DESC=	Install source files
SOURCE_USE=	TEX=source

.if !defined(DPORTS_BUILDER) && defined(PACKAGE_BUILDING)
OPTIONS_DEFINE:=	${OPTIONS_DEFINE:NDOCS}
.endif

.include <bsd.port.mk>
