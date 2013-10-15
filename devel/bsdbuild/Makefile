# $FreeBSD: devel/bsdbuild/Makefile 328215 2013-09-24 23:32:30Z bapt $

PORTNAME=	bsdbuild
PORTVERSION=	3.0
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	http://stable.hypertriton.com/bsdbuild/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	BSD-licensed portable build system

USES=		perl5 shebangfix
SHEBANG_FILES=	*.pl mk/*.pl
GNU_CONFIGURE=	yes

LICENSE=	BSD

CONFIGURE_ARGS=	--with-catman=no

.include <bsd.port.mk>
