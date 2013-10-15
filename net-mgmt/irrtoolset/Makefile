# $FreeBSD: net-mgmt/irrtoolset/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	irrtoolset
PORTVERSION=	5.0.1
CATEGORIES=	net-mgmt
MASTER_SITES=	ISC/IRRToolSet/IRRToolSet-${PORTVERSION}

MAINTAINER=	oberman@es.net
COMMENT=	A suite of routing policy tools to interact with the IRR

PLIST_FILES=	bin/rpslcheck bin/peval bin/rtconfig

USES=		bison
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool

MAN1=		rtconfig.1 peval.1 rpslcheck.1 irrtoolset-errors.1

NO_STAGE=	yes
.include <bsd.port.mk>
