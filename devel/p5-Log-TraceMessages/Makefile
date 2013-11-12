# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: devel/p5-Log-TraceMessages/Makefile 332046 2013-10-30 02:52:46Z vanilla $

PORTNAME=	Log-TraceMessages
PORTVERSION=	1.4
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for trace messages used in debugging

BUILD_DEPENDS=	p5-HTML-FromText>=0:${PORTSDIR}/www/p5-HTML-FromText
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
