# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: textproc/p5-MARC-Lint/Makefile 340622 2014-01-21 17:03:00Z mat $

PORTNAME=	MARC-Lint
PORTVERSION=	1.46
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	A mechanism for validating MARC records

BUILD_DEPENDS=	p5-MARC-Record>=0:${PORTSDIR}/textproc/p5-MARC-Record \
		p5-Business-ISBN>=2.03:${PORTSDIR}/misc/p5-Business-ISBN
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/marc-lint

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
