# New ports collection makefile for:	Lingua::Preferred
# Date created:				30 Dec 2001
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/textproc/p5-Lingua-Preferred/Makefile,v 1.14 2012/11/17 06:02:05 svnexp Exp $
#

PORTNAME=		Lingua-Preferred
PORTVERSION=		0.2.4
CATEGORIES=		textproc perl5
MASTER_SITES=		CPAN
MASTER_SITE_SUBDIR=	CPAN:EDAVIS
PKGNAMEPREFIX=		p5-

MAINTAINER=		perl@FreeBSD.org
COMMENT=	Perl extension to choose a language

BUILD_DEPENDS=	p5-Log-TraceMessages>=0:${PORTSDIR}/devel/p5-Log-TraceMessages
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=		yes

MAN3=			Lingua::Preferred.3

.include <bsd.port.mk>
