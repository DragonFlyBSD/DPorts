# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: textproc/p5-Lingua-Preferred/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Lingua-Preferred
PORTVERSION=	0.2.4
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:EDAVIS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to choose a language

BUILD_DEPENDS=	p5-Log-TraceMessages>=0:${PORTSDIR}/devel/p5-Log-TraceMessages
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
