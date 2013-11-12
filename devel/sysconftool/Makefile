# Created by: Yarema <yds@CoolRat.org>
# $FreeBSD: devel/sysconftool/Makefile 332298 2013-10-31 23:33:06Z garga $

PORTNAME=	sysconftool
PORTVERSION=	0.17
CATEGORIES=	devel
MASTER_SITES=	SF/courier/${PORTNAME}/${PORTVERSION}

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Helps to install application configuration files

LICENSE=	GPLv3

USES=		perl5
USE_BZIP2=	yes
HAS_CONFIGURE=	yes

USE_AUTOTOOLS=	automake aclocal autoconf

pre-patch:
	@${CP} ${TEMPLATES}/config.guess ${TEMPLATES}/config.sub ${WRKSRC}

.include <bsd.port.mk>
