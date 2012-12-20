# New ports collection makefile for:	devel/p5-Sort-Key-DateTime
# Date created:				14 October 2005
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Sort-Key-DateTime/Makefile,v 1.7 2012/11/17 05:56:29 svnexp Exp $
#

PORTNAME=	Sort-Key-DateTime
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for sorting objects by some DateTime key

RUN_DEPENDS=	p5-DateTime>=0.28:${PORTSDIR}/devel/p5-DateTime \
		p5-Sort-Key>=1.28:${PORTSDIR}/devel/p5-Sort-Key
BUILD_DEPENDS=  ${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Sort::Key::DateTime.3

.include <bsd.port.mk>
