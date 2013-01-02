# Created by: Konstantinos Konstantinidis <kkonstan@daemon.gr>
# $FreeBSD: ports/devel/libvanessa_adt/Makefile,v 1.25 2012/12/11 14:20:30 svnexp Exp $

PORTNAME=	libvanessa_adt
PORTVERSION=	0.0.9
CATEGORIES=	devel
MASTER_SITES=	http://horms.net/projects/vanessa/download/vanessa_adt/${PORTVERSION}/
DISTNAME=	vanessa_adt-${PORTVERSION}

MAINTAINER=	thomas@bsdunix.ch
COMMENT=	Library that provides ADTs (queues, dynamic arrays, and more)

LIB_DEPENDS=	vanessa_logger:${PORTSDIR}/devel/libvanessa_logger

USE_LDCONFIG=	yes

USE_BZIP2=	yes
USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|test debian||' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
