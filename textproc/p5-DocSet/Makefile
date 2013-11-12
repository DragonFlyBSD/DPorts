# $FreeBSD: textproc/p5-DocSet/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	DocSet
PORTVERSION=	0.19
PORTREVISION=	1
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:STAS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Documentation projects builder in HTML, PS, and PDF formats

BUILD_DEPENDS=	p5-Pod-POM>=0:${PORTSDIR}/textproc/p5-Pod-POM \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
