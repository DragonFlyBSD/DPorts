# $FreeBSD: japanese/php5-mecab/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mecab
PORTVERSION=	0.5.0
CATEGORIES=	japanese
MASTER_SITES=	http://github.com/downloads/rsky/php-${PORTNAME}/
DISTNAME=	php-mecab-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	A PHP5 extension for MeCab Morphological Analyzer

LIB_DEPENDS=	mecab:${PORTSDIR}/japanese/mecab

USE_PHP=	yes
USE_PHPEXT=	yes
CONFIGURE_ARGS=	--with-mecab=${LOCALBASE}/bin/mecab-config
CONFIGURE_ENV=	LIBS="${LIBS} ${PTHREAD_LIBS}"
CFLAGS+=	${PTHREAD_CFLAGS}

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}php5-

.include <bsd.port.post.mk>
