# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-HTML-SBC/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	HTML-SBC
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Simple blog code to valid XHTML

BUILD_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	HTML::SBC.3

.include <bsd.port.mk>
