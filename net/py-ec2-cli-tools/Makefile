# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: net/py-ec2-cli-tools/Makefile 337030 2013-12-20 16:08:37Z swills $

PORTNAME=	ec2-cli-tools
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Helpful CLI utilities for querying and connecting to EC2 instances

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}boto>=1.0:${PORTSDIR}/devel/py-boto \
		bash>=0:${PORTSDIR}/shells/bash

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
USES=			shebangfix
SHEBANG_FILES=		bin/ec2getsnaps bin/ec2hostcache bin/ec2ssh

.include <bsd.port.mk>
