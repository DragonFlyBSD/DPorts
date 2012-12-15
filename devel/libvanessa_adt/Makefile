# New ports collection makefile for:	libvanessa_adt
# Date created:		28 April 2001
# Whom:			Konstantinos Konstantinidis <kkonstan@daemon.gr>
#
# $FreeBSD: ports/devel/libvanessa_adt/Makefile,v 1.24 2012/11/17 05:55:57 svnexp Exp $
#

PORTNAME=	libvanessa_adt
PORTVERSION=	0.0.7
CATEGORIES=	devel
MASTER_SITES=	http://www.vergenet.net/linux/vanessa/download/%SUBDIR%/
MASTER_SITE_SUBDIR=	vanessa_adt/${PORTVERSION}
DISTNAME=	vanessa_adt-${PORTVERSION}

MAINTAINER=	thomas@bsdunix.ch
COMMENT=	Library that provides ADTs (queues, dynamic arrays, and more)

LIB_DEPENDS=	vanessa_logger.0:${PORTSDIR}/devel/libvanessa_logger

USE_LDCONFIG=	YES

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	YES
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} "s,^SUBDIRS = libvanessa_adt test debian,SUBDIRS = libvanessa_adt," \
				${WRKSRC}/Makefile.in

.include <bsd.port.mk>
