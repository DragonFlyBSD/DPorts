# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Data-Path/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Data-Path
PORTVERSION=	1.4.1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ZAPHAR
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	XPath-like access to complex data structures

BUILD_DEPENDS=	p5-Test-MockObject>=1.08:${PORTSDIR}/devel/p5-Test-MockObject \
		p5-Test-Exception>0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

MAN3=	Data::Path.3

.include <bsd.port.mk>
