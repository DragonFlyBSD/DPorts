# Created by: Dirk Froemberg <dirk@FreeBSD.org>
# $FreeBSD: textproc/expat2/Makefile 323896 2013-07-29 17:12:54Z tijl $

PORTNAME=	expat
PORTVERSION=	2.1.0
CATEGORIES=	textproc
MASTER_SITES=	SF

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	XML 1.0 parser written in C

GNU_CONFIGURE=	yes
ALL_TARGET=	default
USES=		pathfix
USE_LDCONFIG=	yes
MAN1=		xmlwf.1

# Increment only when there are incompatible API changes.
SHLIB_MAJOR=	6

PLIST_SUB=	SHLIB_MAJOR="${SHLIB_MAJOR}"

post-patch:
	@${REINPLACE_CMD} \
		-e 's/@LIBCURRENT.*@/${SHLIB_MAJOR}/' \
		-e '/^DESTDIR =/d' ${WRKSRC}/Makefile.in

list-depend-ports:
	cd ${PORTSDIR}; \
	${FIND} . -mindepth 3 -maxdepth 3 -name Makefile -execdir ${SH} -c \
		'${FIND} . -type f | ${GREP} -v CVS | ${XARGS} ${GREP} -q expat.5' \; \
		-print

.include <bsd.port.mk>
