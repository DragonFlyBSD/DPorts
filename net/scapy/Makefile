PORTNAME=	scapy
PORTVERSION=	2.5.0
PORTREVISION=	1
CATEGORIES=	net python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Powerful interactive packet manipulation program in python
WWW=		https://scapy.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libdnet>0:net/py-libdnet@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pypcap>0:net/py-pypcap@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cryptography>0:security/py-cryptography@${PY_FLAVOR}

USES=		cpe python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

OPTIONS_DEFINE=	GRAPH IPYTHON P0F_BASE MANUF MATPLOT NMAP PYCRYPTO PYX SOX
GRAPH_DESC=	graph generation and visualization
IPYTHON_DESC=	Use IPython (enhanced interactive shell)
MANUF_DESC=	wireshark's MANUF MAC database
MATPLOT_DESC=	Install python matplotlibs
NMAP_DESC=	nmap OS signatures database
P0F_BASE_DESC=	p0f OS signatures database
PYCRYPTO_DESC=	Use py-crypto for WEP decoding
PYX_DESC=	PostScript and PDF graphs drawing
SOX_DESC=	Support for VoIP

GRAPH_USES=		magick:6,run
GRAPH_RUN_DEPENDS=	${LOCALBASE}/bin/dot:graphics/graphviz
IPYTHON_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ipython>0:devel/ipython@${PY_FLAVOR}
NMAP_RUN_DEPENDS=	${LOCALBASE}/share/nmap/nmap-os-db:security/nmap
MANUF_RUN_DEPENDS=	${LOCALBASE}/share/wireshark/manuf:net/wireshark
MATPLOT_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}matplotlib>0:math/py-matplotlib@${PY_FLAVOR}
P0F_BASE_RUN_DEPENDS=	${LOCALBASE}/etc/p0f.fp:net-mgmt/p0f
PYCRYPTO_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycryptodome>0:security/py-pycryptodome@${PY_FLAVOR}
PYX_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyx>0:graphics/py-pyx@${PY_FLAVOR}
SOX_RUN_DEPENDS=	${LOCALBASE}/bin/sox:audio/sox

post-patch:
	@${REINPLACE_CMD} "s,share/man/man1,man/man1," ${WRKSRC}/setup.py
	@${REINPLACE_CMD} "s,/usr/share/,${LOCALBASE}/share/," \
		${WRKSRC}/scapy/modules/nmap.py
	@${REINPLACE_CMD} "s,/etc/,${LOCALBASE}/etc/," \
		${WRKSRC}/scapy/modules/p0f.py
	@${REINPLACE_CMD} 's|"use" in line|"use" in line or "nhop" in line|' \
		${WRKSRC}/scapy/arch/unix.py

.include <bsd.port.mk>
