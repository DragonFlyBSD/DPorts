# New ports collection makefile for:	p5-DateTime-Format-W3CDTF
# Date created:	   7 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-W3CDTF/Makefile,v 1.10 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-W3CDTF
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Parse and format W3CDTF datetime strings

RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Format::W3CDTF.3

.include <bsd.port.mk>
