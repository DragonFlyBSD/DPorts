# Created by: Vladimir Timofeev <vovkasm@gmail.com>
# $FreeBSD: devel/p5-EV/Makefile 338884 2014-01-06 14:40:31Z az $

PORTNAME=	EV
PORTVERSION=	4.15
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MLEHMANN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Perl interface to libev, a high performance full-featured event loop

RUN_DEPENDS=	p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense
BUILD_DEPENDS=	p5-common-sense>=0:${PORTSDIR}/devel/p5-common-sense

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV=	PERL_MM_USE_DEFAULT="YES"

.include <bsd.port.mk>
