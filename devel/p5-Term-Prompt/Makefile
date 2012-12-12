# New ports collection makefile for:	devel/p5-Term-Prompt
# Date created:				25 April 2001
# Whom:					Anton Berezin <tobez@tobez.org>
#
# $FreeBSD: ports/devel/p5-Term-Prompt/Makefile,v 1.12 2012/11/17 05:56:31 svnexp Exp $
#

PORTNAME=	Term-Prompt
PORTVERSION=	1.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl extension for prompting a user for information

BUILD_DEPENDS=	p5-Term-ReadKey>=0:${PORTSDIR}/devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Term::Prompt.3

.include <bsd.port.mk>
