# Created by: wosch
# $FreeBSD: misc/uk-phone/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	uk-phone
PORTVERSION=	2.7
CATEGORIES=	misc
MASTER_SITES=	ftp://ftp.Awfulhak.org/pub/uk-phone/ \
		http://people.FreeBSD.org/~brian/uk-phone/
EXTRACT_SUFX=	.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	United Kingdom phone codes

NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=	# None
EXTRACT_AFTER_ARGS=	> ${WRKSRC}/uk.phone
NO_BUILD=	yes
PLIST_FILES=	share/misc/uk.phone

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${WRKSRC}/uk.phone ${PREFIX}/share/misc

.include <bsd.port.mk>
