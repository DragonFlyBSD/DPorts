# New ports collection makefile for:	p5-PerlIO-via-Unidecode
# Date created:		12 Mar 2011
# Whom:			Dmitry Marakasov <amdmi3@FreeBSD.org>
#
# $FreeBSD: ports/converters/p5-PerlIO-via-Unidecode/Makefile,v 1.3 2012/11/17 05:55:04 svnexp Exp $
#

PORTNAME=	PerlIO-via-Unidecode
PORTVERSION=	1.01
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A perlio layer for Unidecode

BUILD_DEPENDS=	p5-Text-Unidecode>=0:${PORTSDIR}/converters/p5-Text-Unidecode
RUN_DEPENDS=	p5-Text-Unidecode>=0:${PORTSDIR}/converters/p5-Text-Unidecode

PERL_CONFIGURE=	yes

MAN3=		PerlIO::via::Unidecode.3

.include <bsd.port.mk>
