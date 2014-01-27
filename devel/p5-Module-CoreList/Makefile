# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: devel/p5-Module-CoreList/Makefile 339402 2014-01-11 08:02:36Z culot $

PORTNAME=	Module-CoreList
PORTVERSION=	3.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	See what modules shipped with versions of Perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/EXE_FILES/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
