# New ports collection makefile for:	p5-Lingua-Han-Utils
# Date created:		2006-09-06
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/chinese/p5-Lingua-Han-Utils/Makefile,v 1.7 2012/11/17 05:54:57 svnexp Exp $
#

PORTNAME=	Lingua-Han-Utils
PORTVERSION=	0.12
CATEGORIES=	chinese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	The utility tools of Chinese character(HanZi)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Encode-Detect-CJK>=0:${PORTSDIR}/converters/p5-Encode-Detect-CJK
RUN_DEPENDS=	p5-Encode-Detect-CJK>=0:${PORTSDIR}/converters/p5-Encode-Detect-CJK

PERL_CONFIGURE=	yes

MAN3=		Lingua::Han::Utils.3

.include <bsd.port.mk>
