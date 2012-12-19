# New ports collection makefile for:	p5-Lingua-Han-PinYin
# Date created:		2006-09-06
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/chinese/p5-Lingua-Han-PinYin/Makefile,v 1.11 2012/11/17 05:54:57 svnexp Exp $
#

PORTNAME=	Lingua-Han-PinYin
PORTVERSION=	0.16
CATEGORIES=	chinese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Retrieve the Mandarin (PinYin) of Chinese character (HanZi)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Lingua-Han-Utils>=0.10:${PORTSDIR}/chinese/p5-Lingua-Han-Utils
RUN_DEPENDS=	p5-Lingua-Han-Utils>=0.10:${PORTSDIR}/chinese/p5-Lingua-Han-Utils

PERL_CONFIGURE=	yes

MAN3=		Lingua::Han::PinYin.3

.include <bsd.port.mk>
