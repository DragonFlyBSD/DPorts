# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: devel/p5-Lvalue/Makefile 323119 2013-07-16 18:10:30Z zi $

PORTNAME=	Lvalue
PORTVERSION=	0.21
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ASG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add lvalue getters and setters to existing objects

BUILD_DEPENDS=	p5-Carp>=0:${PORTSDIR}/devel/p5-Carp \
    		p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Lvalue.3

post-patch::
	@${REINPLACE_CMD} -e 's|qw(can isa DOES VERSION)|(qw(can isa DOES VERSION))|g' \
		${WRKSRC}/lib/Lvalue.pm
	@${RM} ${WRKSRC}/lib/Lvalue.pm.bak

.include <bsd.port.mk>
