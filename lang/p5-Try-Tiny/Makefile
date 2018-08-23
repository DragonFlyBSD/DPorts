# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/lang/p5-Try-Tiny/Makefile 444894 2017-07-02 16:10:36Z sunpoet $

PORTNAME=	Try-Tiny
PORTVERSION=	0.28
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ETHER
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Minimal try/catch with proper localization of $$@

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

TEST_DEPENDS=	p5-Capture-Tiny>=0.12:devel/p5-Capture-Tiny

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
