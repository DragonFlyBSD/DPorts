# Created by: wosch
# $FreeBSD: misc/uk-postcodes/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	uk-postcodes
PORTVERSION=	2.2
CATEGORIES=	misc
MASTER_SITES=	ftp://ftp.Awfulhak.org/pub/uk-postcodes/ \
		http://people.FreeBSD.org/~brian/uk-postcodes/
EXTRACT_SUFX=	.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	United Kingdom post codes

NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=	# None
EXTRACT_AFTER_ARGS=	> ${WRKSRC}/uk.postcodes
NO_BUILD=	yes
PLIST_FILES=	share/misc/uk.postcodes

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${WRKSRC}/uk.postcodes ${PREFIX}/share/misc

.include <bsd.port.mk>
