# Created by: Joshua D. Abraham <jabra@ccs.neu.edu>
# $FreeBSD: databases/p5-Test-DatabaseRow/Makefile 341762 2014-01-29 17:18:46Z az $

PORTNAME=	Test-DatabaseRow
PORTVERSION=	2.03
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Simple database tests

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
