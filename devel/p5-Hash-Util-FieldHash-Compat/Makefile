# Created by: chinsan
# $FreeBSD: devel/p5-Hash-Util-FieldHash-Compat/Makefile 313898 2013-03-11 13:50:29Z sunpoet $

PORTNAME=	Hash-Util-FieldHash-Compat
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use Hash::Util::FieldHash or ties, depending on availability

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Tie-RefHash>=1.38:${PORTSDIR}/devel/p5-Tie-RefHash \
		p5-Tie-RefHash-Weak>=0.08:${PORTSDIR}/devel/p5-Tie-RefHash-Weak
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

PERL_CONFIGURE=	yes

MAN3=		Hash::Util::FieldHash::Compat.3 \
		Hash::Util::FieldHash::Compat::Heavy.3

.include <bsd.port.mk>
