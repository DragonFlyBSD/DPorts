# Created by: ijliao
# $FreeBSD: ports/textproc/py-docutils/Makefile,v 1.20 2012/12/26 09:50:06 svnexp Exp $
#

PORTNAME=	docutils
PORTVERSION=	0.10
CATEGORIES=	textproc python
MASTER_SITES=	SF \
		CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Python Documentation Utilities

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

BIN_SCRIPTS=	rst2html.py rst2s5.py rst2latex.py rst2xetex.py \
	rst2man.py rst2xml.py rst2pseudoxml.py rstpep2html.py \
	rst2odt.py rst2odt_prepstyles.py

post-install:
.for script in ${BIN_SCRIPTS}
	@cd ${PREFIX}/bin && ${LN} -s ${script} ${script:C/\.py//}
.endfor

.include <bsd.port.mk>
