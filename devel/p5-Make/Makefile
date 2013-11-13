# Created by: will
# $FreeBSD: devel/p5-Make/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	Make
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module implementing 'make' and script

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' -e 's|pmake|perlmake|' \
		${WRKSRC}/Makefile.PL
	@${CP} ${WRKSRC}/pmake ${WRKSRC}/perlmake

.include <bsd.port.mk>
