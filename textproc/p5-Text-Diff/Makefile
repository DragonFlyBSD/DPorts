# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-Diff/Makefile 340711 2014-01-22 14:35:55Z mat $

PORTNAME=	Text-Diff
PORTVERSION=	1.41
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Text::Diff - Perform diffs on files and record sets

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

COMMON_DEPENDS=	p5-Algorithm-Diff>=1.19:${PORTSDIR}/devel/p5-Algorithm-Diff
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
