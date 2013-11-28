# Created by: Mark Huizer <xaa+ports@timewasters.nl>
# $FreeBSD: games/pear-Games_Chess/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Games_Chess
PORTVERSION=	1.0.1
CATEGORIES=	games devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR methods for constructing and validating chess games in PGN

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
