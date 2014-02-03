# Created by: Andreas Klemm <andreas@klemm.gtn.com>
# $FreeBSD: converters/p5-Boulder/Makefile 341761 2014-01-29 17:00:41Z az $

PORTNAME=	Boulder
PORTVERSION=	1.30
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	API for hierarchical tag/value structures

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
