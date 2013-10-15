# Created by: will
# $FreeBSD: devel/p5-Make/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Make
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module implementing 'make' and script

USES=		perl5
USE_PERL5=	configure

MAN1=		perlmake.1
MAN3=		Make.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -i '' -e 's|pmake|perlmake|' \
		${WRKSRC}/Makefile.PL
	@${CP} ${WRKSRC}/pmake ${WRKSRC}/perlmake

.include <bsd.port.mk>
