# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-HTML-SBC/Makefile 340610 2014-01-21 14:03:59Z mat $

PORTNAME=	HTML-SBC
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Simple blog code to valid XHTML

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
